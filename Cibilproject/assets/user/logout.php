<?php
	session_start();
	unset($_SESSION['username']);
	unset($_SESSION['name']);
	unset($_SESSION['userid']);
	// session_destroy();
	header('Location:../../index.php');
?>