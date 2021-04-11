<?php
	session_start();
	$name=$_GET['name'];
	$email=$_GET['email'];
	$username=$_GET['username'];
	$password=$_GET['password'];
	$bankname=$_GET['bankname'];

	use PHPMailer\PHPMailer\PHPMailer;
	use PHPMailer\PHPMailer\Exception;

	// Include PHPMailer library files
	require '../../../lib/PHPMailer/Exception.php';
	require '../../../lib/PHPMailer/PHPMailer.php';
	require '../../../lib/PHPMailer/SMTP.php';

	$mail = new PHPMailer;

	// SMTP configuration
	$mail->isSMTP();
	$mail->Host     = 'smtp.gmail.com';
	$mail->SMTPAuth = true;
	$mail->Username = 'recruitmentcampus2@gmail.com';
	$mail->Password = 'q1wertyuiop';
	$mail->SMTPSecure = 'tls';
	$mail->Port     = 587;

	$mail->setFrom('recruitmentcampus2@gmail.com', 'CibilSystem');

	// Add a recipient
	$mail->addAddress($email);

	// Email subject
	$mail->Subject = 'Cibil Score Login Details';

	// Set email format to HTML
	$mail->isHTML(true);

	// Email body content
	echo $mailContent = "
	    <h4>Dear ".$name.",</h4>
		Thanks for taking your time. 
		<br>
		Your Bank ".$bankname.",</b><br>
		Has Registered your details on Cibil System and generated your cibil score. Kindly login to our <a href='http://localhost/Project/Cibilproject/assets/login.php'> website</a> with the below login credentials.

		<br>
		<br>
		Username : ".$username."<br>
		Password : ".$password."<br>
		<br>
		For futher queries,
		<br>
		Email Us: recruitmentcampus2@gmail.com
		<br>
		<br>
		Thank you,

		<h4> Nazim Chougule <br>
		Cibil Head</h4>";

	$mail->Body = $mailContent;

	// Send email
	if(!$mail->send()){
	    echo 'Message could not be sent.';
	    echo 'Mailer Error: ' . $mail->ErrorInfo;
	}else{
	    echo 'Message has been sent';
	    header('Location:userview.php?success=1');
	}

?>