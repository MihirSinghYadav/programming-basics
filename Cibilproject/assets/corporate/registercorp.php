<?php
	session_start();
	require_once('indexheader.php');
	if(isset($_SESSION['corpname']) && $_SESSION['corpname']!='') {
		header('Location:corporatehome.php');
	}
	else{
		require_once('../config.php');
		$select="SELECT * FROM `cibil_system_bankname`";
		$query=mysqli_query($conn,$select);
?>


	<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px;">
		<div class="container register">
			<div class="col-md-12 login-form">
				<div class="card" style="width: auto;">
					<div class="card-body">
					    <h1 class="card-title" style="color:white;">Corporate Registration</h1>
					    <form action="corpregisterdetails.php" method="post" class="formcontrol text-left" id="corpregister">
					    	<div class="row">
						        <div class="form-group col-6">
						            <label>Name : </label><br>
						            <input type="text" name="name" id="name" placeholder="Enter Full Name">
						            <div class="text-danger nameerror"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Email : </label><br>
						            <input type="email" name="email" id="email" placeholder="Enter Email">
						            <div class="text-danger emailerror"></div>
						        </div>
						    </div>
						    <div class="row justify-content-center">
								<div class="form-group col-md-6">
						            <label>Select Bank : </label><br>
						            <select name="bank">
						            	<option disabled selected>-- Select Bank --</option>
						            	<?php while($res=mysqli_fetch_object($query)) { ?>
							            	<option value="<?php echo $res->id; ?>"> <?php echo $res->bank_name; ?> </option>
							            <?php } ?>
						            </select>
						        </div>
						        <div class="form-group col-md-6">
						            <label>Contact No : </label><br>
						            <input type="text" name="contact" id="contact" placeholder="Enter Contact No">
						            <div class="text-danger contacterror"></div>
						        </div>
						    </div>
						    <div class="row">
						        <div class="form-group col-6">
						            <label>Username : </label><br>
						            <input type="text" name="username" id="username" placeholder="Enter Username">
						            <div class="text-danger usererror"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Password : </label><br>
							        <input type="password" name="password" id="password" placeholder="Enter Password">
						            <div class="text-danger passerror"></div>
						        </div>
						    </div>
					        <div class="text-center">
					          	<button type="submit" class="sign" id="submitcorpregister">Register</button>
					           	<button type="reset" class="cancel">Cancel</button><br><br>
					           	<a href="../user/register.php" class="sign">Register a User Account</a>
					           	<p class="mt-5">Already Have an Account? <a href="../login.php">Login</a></p>
					        </div>
					    </form>
					</div>
				</div>
			</div>
		</div>
	</div>


<?php
		require_once('userfooter.php');
	}
?>

<script type="text/javascript">
	$(document).ready(function(){
		$('.login-btn').attr('href','../login.php');
		$('.login-btn').text('Login');
	})
	$('#name').keyup(function(event) {
	    $('.nameerror').text("");
	})
	$('#email').keyup(function(event) {
	    $('.emailerror').text("");
	})
	$('#username').keyup(function(event) {
	    $('.usererror').text("");
	})
	$('#password').keyup(function(event) {
	    $('.passerror').text("");
	})
	$('#contact').keyup(function(event) {
	    $('.contacterror').text("");
	})
</script>

<?php 
	if(isset($_GET['register_error']) && $_GET['register_error']==1) {
?>
<script type="text/javascript">
	swal("", "Username already exists", "error");
	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
</script>
<?php
	}
?>