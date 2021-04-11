<?php
	session_start();
	require_once('../../config.php');
	$name=$_POST['name'];
	$email=$_POST['email'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$date=date('y-m-d h:i:s');
	$select="SELECT * FROM `cibil_system_login` WHERE `username`='$username'";
	$query=mysqli_query($conn,$select);
	$count=mysqli_num_rows($query);
	if($count==0){
		$insertlogin="INSERT INTO `cibil_system_login` (`username`,`password`,`role`,`register_date`) VALUES ('$username','$password','sub-admin','$date')";
		mysqli_query($conn,$insertlogin);
		echo $selectlogin="SELECT id FROM `cibil_system_login` WHERE `username`='$username'";
		$queryselect=mysqli_query($conn,$selectlogin);
		$reslogin=mysqli_fetch_object($queryselect);
		$insertsubadmin="INSERT INTO `cibil_system_admin` (`name`,`email`,`login_id`) VALUES ('$name','$email','$reslogin->id')";
		mysqli_query($conn,$insertsubadmin);
		header('Location:admin_view.php?success=1');
	}
	else{
		header('Location:addsubadmin.php?error=1');
	}
?>