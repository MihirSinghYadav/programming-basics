<?php
	session_start();
	if(isset($_SESSION['corpname']) && $_SESSION['corpname']!='') {
		require_once('userheader.php');
		require_once('../config.php');
		$id=$_SESSION['corpid'];
		$select="SELECT bank_id FROM `cibil_system_corporate` WHERE `id`='$id'";
		$query=mysqli_query($conn,$select);
		$res=mysqli_fetch_object($query);
?>

<style type="text/css">
	
  .corporate input[type="radio"] {
      display:none;
  }

  .corporate input[type="radio"] + label{
    cursor:pointer;
  }

  .corporate input[type="radio"] + label span {
      display:inline-block;
      width:19px;
      height:19px;
      margin:-1px 4px 0 0;
      vertical-align:middle;
      background:black;
      border-radius:50%;
      cursor:pointer;
  }

  .corporate input[type="radio"]:checked + label span {
      background:#1BB1DC;
      height:20px;
      width:20px;
      border-radius: 50%;
      border:5px solid white;
  }

</style>

		<div class="container-fluid corporate" style="padding-top: 180px!important; padding-bottom: 100px">
			<div class="row">
				<div class="col-md-2"></div>
				<div class="col-md-8 login-form">
					<div class="card" style="width: auto;">
						<div class="card-body">
						    <h1 class="card-title" style="color:white; margin-top: 0">Add User</h1>
						    <form action="corpadduserdetails.php" method="post" class="formcontrol text-left" id="adduserform">
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
								    	<input type="radio" id="male" name="gender" checked value="Male">
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
							        <div class="form-group col-6">
							            <label>Credit Card Dues : </label><br>
							            <input type="text" name="ccdues" id="ccdues" placeholder="Enter Credit Card Dues (0 or 2)">
							            <div class="ccerror text-danger"></div>
							        </div>
							        <div class="form-group col-6">
							            <label>CC Dues Remarks : </label><br>
								        <input type="text" name="ccdues_query" id="ccdues_query" placeholder="Enter Credit Card Dues Remarks">
							            <div class="ccqerror text-danger"></div>
							        </div>
							    </div>
							    <div class="row">
							        <div class="form-group col-6">
							            <label>Pending Loan : </label><br>
							            <input type="text" name="pending_loan" id="pending_loan" placeholder="Enter Pending Loan (0 or 1)">
							            <div class="plerror text-danger"></div>
							        </div>
							        <div class="form-group col-6">
							            <label>PL Remarks : </label><br>
								        <input type="text" name="pending_loan_query" id="pending_loan_query" placeholder="Enter Pending Loan Remarks">
							            <div class="plqerror text-danger"></div>
							        </div>
							    </div>
							    <div class="row">
							        <div class="form-group col-6">
							            <label>Check Bounce : </label><br>
							            <input type="text" name="check_bounce" id="check_bounce" placeholder="Enter Check Bounce (0 or 1)">
							            <div class="cberror text-danger"></div>
							        </div>
							        <div class="form-group col-6">
							            <label>CB Remarks : </label><br>
								        <input type="text" name="check_bounce_query" id="check_bounce_query" placeholder="Enter Check Bounce Remarks">
							            <div class="cbqerror text-danger"></div>
							        </div>
							    </div>
							    <div class="row">
							        <div class="form-group col-6">
							            <label>Other Scams : </label><br>
							            <input type="text" name="scam" id="scam" placeholder="Enter Scam (0 or 1)">
							            <div class="serrro text-danger"></div>
							        </div>
							        <div class="form-group col-6">
							            <label>Scam Remarks : </label><br>
							            <input type="text" name="scam_query" id="scam_query" placeholder="Enter Scam Remarks">
							            <div class="sqerror text-danger"></div>
							        </div>
							    </div>
							    <div class="row">
									<div class="form-group col-6">
							            <label>Contact No : </label><br>
							            <input type="text" name="contact" id="contact" placeholder="Enter Contact No">
							            <div class="contacterror text-danger"></div>
							        </div>
							        <div class="form-group col-6">
							            <label>City : </label><br>
							            <input type="text" name="city" id="city" placeholder="Enter City Name">
							            <div class="cityerror text-danger"></div>
							        </div>
							    </div>
							    <div class="row">
							        <div class="form-group col-12">
							            <label>Address : </label><br>
							            <textarea name="address" id="address" rows="4"></textarea>
							            <div class="addresserror text-danger"></div>
							        </div>
							    </div>
							    <input type="hidden" name="bankid" value="<?php echo $res->bank_id; ?>">
						        <div class="text-center">
						          	<button type="submit" class="sign" id="addusersubmit">Add</button>
						           	<a href="corporatehome.php" class="cancel" style="text-decoration: none; border:1px solid gray;">Cancel</a><br><br>
						        </div>
						    </form>
						</div>
					</div>
				</div>
				<div class="col-md-2"></div>
			</div>
		</div>


<?php
		require_once('userfooter.php');
	}
	else{
		header('Location:../error.php');
	}
?>

<script type="text/javascript">
	$(document).ready(function(){
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
		$('#ccdues').keyup(function(event) {
		    $('.ccerror').text("");
		})
		$('#ccdues_query').keyup(function(event) {
		    $('.ccqerror').text("");
		})
		$('#pending_loan').keyup(function(event) {
		    $('.plerror').text("");
		})
		$('#pending_loan_query').keyup(function(event) {
		    $('.plqerror').text("");
		})
		$('#check_bounce').keyup(function(event) {
		    $('.cberror').text("");
		})
		$('#check_bounce_query').keyup(function(event) {
		    $('.cbqerror').text("");
		})
		$('#scam').keyup(function(event) {
		    $('.serrro').text("");
		})
		$('#scam_query').keyup(function(event) {
		    $('.sqerror').text("");
		})
	});
</script>

<?php
	if(isset($_GET['error']) && $_GET['error']==1){
?>
<script type="text/javascript">
	swal("", "Username Already Exists!", "error");
</script>
<?php
	}
?>

<script type="text/javascript">
	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
</script>