$(function () {
    $(":file").change(function () {
        if (this.files && this.files[0]) {
            var reader = new FileReader();

            reader.onload = imageIsLoaded;
            reader.readAsDataURL(this.files[0]);
        }
    });

    $("translate").change(function () {
        
    });
  });


