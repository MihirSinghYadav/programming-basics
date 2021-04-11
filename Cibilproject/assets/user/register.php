<?php
	session_start();
	require_once('indexheader.php');
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		header('Location:userhome.php');
	}
	else{
		require_once('../config.php');
		$select="SELECT * FROM `cibil_system_bankname`";
		$query=mysqli_query($conn,$select);
?>


	<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px">
		<div class="container register">
			<div class="col-md-12 login-form">
				<div class="card" style="width: auto;">
					<div class="card-body">
					    <h1 class="card-title" style="color:white;">User Registration</h1>
					    <form action="userregisterdetails.php" method="post" class="formcontrol text-left" id="userregister">
					    	<div class="row">
						        <div class="form-group col-6">
						            <label>Name : </label><br>
						            <input type="text" name="name" id="name" placeholder="Enter Full Name">
						            <div class="nameerror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Email : </label><br>
						            <input type="email" name="email" id="email" placeholder="Enter Email">
						            <div class="emailerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
						    	<div class="form-group col-md-6 align-self-center">
						    		<label>Gender : &nbsp</label>
							    	<input type="radio" id="male" name="gender" value="Male" checked>
									<label for="male"><span></span>&nbspMale</label>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
									<input type="radio" id="female" name="gender" value="Female">
									<label for="female"><span></span>&nbspFemale</label>
								</div>
						    </div>
						    <div class="row">
						        <div class="form-group col-6">
						            <label>Username : </label><br>
						            <input type="text" name="username" id="username" placeholder="Enter Username">
						            <div class="usererror text-danger"></div>
						        </div>
						        <div class="form-group col-6">
						            <label>Password : </label><br>
							        <input type="password" name="password" id="password" placeholder="Enter Password">
						            <div class="passerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
								<div class="form-group col-md-6">
						            <label>Contact No : </label><br>
						            <input type="text" name="contact" id="contact" placeholder="Enter Contact No">
						            <div class="contacterror text-danger"></div>
						        </div>
						        <div class="form-group col-md-6">
						            <label>City : </label><br>
						            <input type="text" name="city" id="city" placeholder="Enter Your City">
						            <div class="cityerror text-danger"></div>
						        </div>
						    </div>
						    <div class="row">
						    	<div class="form-group col-6">
						            <label>Bank : </label><br>
						            <select name="bank">
						            	<option disabled selected>-- Select Bank --</option>
						            	<?php while($res=mysqli_fetch_object($query)) { ?>
							            	<option value="<?php echo $res->id; ?>"> <?php echo $res->bank_name; ?> </option>
							            <?php } ?>
						            </select>
						        </div>
						        <div class="form-group col-6">
						            <label>Address : </label><br>
						            <textarea name="address" rows="4" id="address"></textarea>
						            <div class="addresserror text-danger"></div>
						        </div>
						    </div>
					        <div class="text-center">
					          	<button class="sign" id="submituserregister">Register</button>
					           	<button type="reset" class="cancel">Cancel</button><br><br>
					           	<a href="../corporate/registercorp.php" class="sign">Register a Corporate Account</a>
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
		$('#register').attr('href','../login.php');
		$('#register').text('Login');
	});
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
	$('#city').keyup(function(event) {
	    $('.cityerror').text("");
	})
	$('#address').keyup(function(event) {
	    $('.addresserror').text("");
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