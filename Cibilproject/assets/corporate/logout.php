<?php
	session_start();
	unset($_SESSION['corpname']);
	unset($_SESSION['corpusername']);
	unset($_SESSION['corpid']);
	// session_destroy();
	header('Location:../../index.php');
?>