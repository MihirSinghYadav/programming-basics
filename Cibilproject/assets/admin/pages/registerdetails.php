<?php
	require_once('../../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$repassword=$_POST['repassword'];
	$date=date('y-m-d h:i:s');
	$selectuser="SELECT `username` FROM cibil_system_login WHERE username='$username'";
	$queryuser=mysqli_query($conn,$selectuser);
	$count=mysqli_num_rows($queryuser);
	if($count==0){
		$insert="INSERT INTO `cibil_system_login` (`username`,`password`,`role`,`register_date`) values('$username','$password','admin','$date')";
		mysqli_query($conn,$insert);
		$select="SELECT id FROM cibil_system_login WHERE username='$username'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
		$insertadmin="INSERT INTO `cibil_system_admin` (`name`,`email`,`login_id`) values('$name','$email','$res->id')";
		mysqli_query($conn,$insertadmin);
		header('Location:../index.php?register_success=1');
	}
	else{
		header('Location:register.php?register_error=1');
	}
?>