<?php
	require_once('../../config.php');
	$username=$_POST['username'];
	$password=$_POST['password'];
	$repassword=$_POST['repassword'];
	if($password!="" && $repassword!=""){
		if($password==$repassword){
			$update="UPDATE `cibil_system_login` SET password='$password' WHERE username='$username'";
			mysqli_query($conn,$update);
			header('Location:../index.php?reset_success=1');
		}
		else{
			header('Location:forgotpassword.php?change_error=2'.'&username='.$username);
		}
	}
	else{
		header('Location:forgotpassword.php?change_error=1'.'&username='.$username);
	}
?>