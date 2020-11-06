$(function () {
    $(":file").change(function () {
        if (this.files && this.files[0]) {
            var reader = new FileReader();

            reader.onload = imageIsLoaded;
            reader.readAsDataURL(this.files[0]);
        }
    });
  });

function readURL(input) {
    if (input.files && input.files[0]) {
        var reader = new FileReader();

        reader.onload = function (e) {
            $('#myImg').attr('src', e.target.result)
            //.width(500)
            //.height(200);
    }

    reader.readAsDataURL(input.files[0]);
    }
}

$("#imgInp").change(function() {
  readURL(this);
});
