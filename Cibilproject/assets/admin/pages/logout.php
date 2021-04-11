<?php
	session_start();
	unset($_SESSION['admin_name']);
	unset($_SESSION['admin_id']);
	unset($_SESSION['admin_username']);
	unset($_SESSION['admin_role']);
	// session_destroy();
	header('Location:../index.php');
?>