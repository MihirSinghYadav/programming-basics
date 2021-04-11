<?php
	require_once('config.php');
	$username=$_POST['username'];
	$role=$_POST['role_id'];
	if($role=='1'){
		$select="SELECT * FROM `cibil_system_login` WHERE `username`='$username' AND `role`='user'";
		$query=mysqli_query($conn,$select);
		if(mysqli_num_rows($query)>0){
			header('Location:forgotpassword.php?reset_pass=1'.'&username='.$username);
		}
		else{
			header('Location:forgotpassword.php?reset_error=2'.'&role=1');
		}
	}
	else if($role=='2'){
		$select="SELECT * FROM `cibil_system_login` WHERE `username`='$username' AND `role`='corporate'";
		$query=mysqli_query($conn,$select);
		if(mysqli_num_rows($query)>0){
			header('Location:forgotpassword.php?reset_pass=1'.'&username='.$username);
		}
		else{
		header('Location:forgotpassword.php?reset_error=2'.'&role=2');
		}
	}
	
?>