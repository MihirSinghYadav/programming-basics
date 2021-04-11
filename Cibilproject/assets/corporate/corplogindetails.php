<?php
	require_once('../config.php');
	$username=$_POST['username1'];
	$password=$_POST['password1'];
	$select="SELECT * FROM `cibil_system_login` WHERE `username` LIKE BINARY '$username' AND `password` LIKE BINARY '$password' AND `role`='corporate'";
	$query=mysqli_query($conn,$select);
	if(mysqli_num_rows($query)>0){
		$selectcorp="SELECT `cibil_system_corporate`.name, `cibil_system_corporate`.id as corpid, `cibil_system_login`.username FROM `cibil_system_corporate` JOIN `cibil_system_login` ON `cibil_system_corporate`.login_id=`cibil_system_login`.id WHERE `cibil_system_login`.username='$username'";
		$querycorp=mysqli_query($conn,$selectcorp);
		$res=mysqli_fetch_object($querycorp);
		session_start();
		$_SESSION['corpname']=$res->name;
		$_SESSION['corpusername']=$res->username;
		$_SESSION['corpid']=$res->corpid;
		header('Location:corporatehome.php');
	}
	else{
		header('Location:../login.php?error=1');
	}
?>