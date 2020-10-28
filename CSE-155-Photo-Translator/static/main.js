
$(document).ready(function(){

	$("#submit").click(function(){
		move_uploaded_file($_FILES["imgfile"]["tmp_name"],"uploads/$filename");
	});
});

