<?php
	require_once('../config.php');
	$username=$_POST['username'];
	$password=$_POST['password'];
	$select="SELECT * FROM `cibil_system_login` WHERE `username` LIKE BINARY '$username' AND `password` LIKE BINARY '$password' AND `role`='user'";
	$query=mysqli_query($conn,$select);
	if(mysqli_num_rows($query)>0){
		$selectname="SELECT `cibil_system_user`.name, `cibil_system_user`.id as userid, `cibil_system_login`.username FROM `cibil_system_user` JOIN `cibil_system_login` ON `cibil_system_user`.login_id=`cibil_system_login`.id WHERE `cibil_system_login`.username='$username'";
		$queryuser=mysqli_query($conn,$selectname);
		$res=mysqli_fetch_object($queryuser);
		session_start();
		$_SESSION['username']=$res->name;
		$_SESSION['name']=$res->username;
		$_SESSION['userid']=$res->userid;
		header('Location:userhome.php');
	}
	else{
		header('Location:../login.php?error=1');	
	}
?>