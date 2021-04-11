<?php
	require_once('../../config.php');
	$username=$_POST['username'];
	$password=$_POST['password'];
	$select="SELECT * FROM `cibil_system_login` WHERE `username` LIKE BINARY '$username' AND `password` LIKE BINARY '$password' AND NOT `role`='user' AND NOT `role`='corporate'";
	$query=mysqli_query($conn,$select);
	if(mysqli_num_rows($query)>0){
		$selectadmin="SELECT cibil_system_login.* ,cibil_system_admin.name FROM cibil_system_login JOIN cibil_system_admin ON cibil_system_admin.login_id = cibil_system_login.id WHERE cibil_system_login.username='$username'";
		$queryadmin=mysqli_query($conn,$selectadmin);
		$resadmin=mysqli_fetch_assoc($queryadmin);
		session_start();
		$_SESSION['admin_name']=$resadmin['name']; 
		$_SESSION['admin_id']=$resadmin['id'];
		$_SESSION['admin_username']=$resadmin['username'];
		$_SESSION['admin_role']=$resadmin['role'];
		if($_SESSION['admin_role']=='admin'){
			header('Location:dashboard.php');
		}
		else{
			header('Location:userimprovement.php');
		}
	}
	else{
		header('Location:../index.php?error=1');
	}
?>