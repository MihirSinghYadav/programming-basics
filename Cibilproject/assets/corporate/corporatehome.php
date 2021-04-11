<?php
	session_start();
	if(isset($_SESSION['corpname']) && $_SESSION['corpname']!='') {
		require_once('userheader.php');
		require_once('../config.php');
		$name=$_SESSION['corpusername'];
		$selectdetails="SELECT `cibil_system_user`.*, `cibil_system_corporate`.bank_id, `cibil_system_corporate`.login_id, `cibil_system_login`.username, `cibil_system_userscore`.* FROM `cibil_system_user` JOIN `cibil_system_corporate` ON `cibil_system_user`.bank_id=`cibil_system_corporate`.bank_id JOIN `cibil_system_login` ON `cibil_system_corporate`.login_id=`cibil_system_login`.id JOIN `cibil_system_userscore` ON `cibil_system_user`.score_id=`cibil_system_userscore`.id WHERE `cibil_system_login`.username='$name' ORDER BY `cibil_system_user`.id ASC";
		$querydetails=mysqli_query($conn,$selectdetails);
?>

<link rel="stylesheet" type="text/css" href="https://cdn.datatables.net/1.10.19/css/jquery.dataTables.min.css">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jquery-modal/0.9.1/jquery.modal.min.css" />


<style type="text/css">
	
	.modal{
		background: #2d2b46!important;
		color:white;
	}

	.formcontrol{
		margin-top: 0;
	}

</style>

		<div class="container-fluid corporate">
			<h1>User Details</h1>
			<div class="row" style="background: #2d2b46; color: white; border-radius: 20px; ">
				<div class="container-fluid text-right pt-4 pr-4">
					<a href="corp_adduser.php" class="login-btn ml-auto">Add a User</a>
				</div>
			    <table id="example" class="display nowrap table-striped border text-center" style="width:100%;">
			        <thead>
			            <tr>
			            	<th>S. No</th>
			                <th>Name</th>
			                <th>Email</th>
			                <th>Mobile</th>
			                <th>City</th>
			                <th>Address</th>
			                <th>Credit Card Dues</th>
			                <th>Pending Loans</th>
			                <th>Check Bounce</th>
			                <th>Other Scam</th>
			                <th style="color: #45B39D;">Cibil Score</th>
			                <th>Action</th>
			            </tr>
			        </thead>
			        <tbody>
			        	<?php 
			        		$i=1;
			        		while($res=mysqli_fetch_object($querydetails)) {
			        	?>
				            <tr>
				            	<td> <?php echo $i++; ?> </td>
				                <td> <?php echo $res->name; ?> </td>
				                <td> <?php echo $res->email; ?> </td>
				                <td> <?php echo $res->contact; ?> </td>
				                <td> <?php echo $res->city; ?> </td>
				                <td> <?php echo $res->address; ?> </td>
				                <td> <?php echo $res->ccdues; ?> </td>
				                <td> <?php echo $res->pending_loan; ?> </td>
				                <td> <?php echo $res->bounce_check; ?> </td>
				                <td> <?php echo $res->scam; ?> </td>
				                <td> <?php echo $res->score; ?> </td>
				                <td><a href="#edit-form" rel="modal:open" style="font-size:30px;" scoreid="<?php echo $res->score_id; ?>" class="edituser"><i class="fa fa-pencil-square" aria-hidden="true"></i></a></td>
				            </tr>
				        <?php
				        	}
				        ?>
			        </tbody>
			    </table>
			</div>
		</div>

		<div class="modal scamreport" id="edit-form">
			<form action="update_userdata.php" method="post" class="formcontrol text-left" id="edituserbycorp">
				<h1 class="text-center mb-5" style="font-weight: bold;">EDIT USER</h1>
				<div class="row">
					<div class="form-group col-6">
					    <label>Name : </label><br>
						<input type="text" name="name" id="name" readonly>
					</div>
					<div class="form-group col-6">
						<label>Email : </label><br>
						<input type="email" name="email" id="email" readonly>
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
						<label>Scam : </label><br>
						<input type="text" name="scam" id="scam" placeholder="Enter Scam (0 or 1)">
						<div class="serror text-danger"></div>
					</div>
					<div class="form-group col-6">
						<label>Scam Remarks : </label><br>
						<input type="text" name="scam_query" id="scam_query" placeholder="Enter Scam Remarks">
						<div class="sqerror text-danger"></div>
					</div>
					<input type="hidden" name="score_id">
				</div>
				<div class="row justify-content-center">
					<div class="col-6 text-center">
						<button type="submit" class="sign" id="edituserbycorpsubmit">Submit</button>
					</div>
				</div>
			</form>
		</div>


<?php
		require_once('userfooter.php');
	}
	else{
		header('Location:../error.php');
	}
?>


<script type="text/javascript" src="https://cdn.datatables.net/1.10.19/js/jquery.dataTables.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery-modal/0.9.1/jquery.modal.min.js"></script>

<script type="text/javascript">
    $(document).ready(function() {
        $('#example').DataTable( {
            "scrollX": true
        } );
        $('#example1').DataTable( {
            "scrollX": true
        } );
        $('th').removeClass('sorting');
        $('th').removeClass('sorting_asc');
    } );
</script>

<?php
	if(isset($_GET['success']) && $_GET['success']==1){
?>
<script type="text/javascript">
	swal("", "User Added Successfully!", "success");
</script>
<?php
	}
	if(isset($_GET['success']) && $_GET['success']==2){
?>
<script type="text/javascript">
	swal("", "User Edited Successfully!", "success");
</script>
<?php
	}
?>

<script type="text/javascript">

	$('.edituser').click(function(){
		var score_id = $(this).attr('scoreid');
		$.ajax({
			url: 'fetch_userdata.php',
			data: 'score_id='+score_id,
			method: 'get',
			dataType: 'json',
			success: function(response){
				$('input[name="name"]').val(response.name);
				$('input[name="email"]').val(response.email);
				$('input[name="ccdues"]').val(response.ccdues);
				$('input[name="ccdues_query"]').val(response.ccdues_query);
				$('input[name="pending_loan"]').val(response.pending_loan);
				$('input[name="pending_loan_query"]').val(response.pendingloan_query);
				$('input[name="check_bounce"]').val(response.bounce_check);
				$('input[name="check_bounce_query"]').val(response.bouncecheck_query);
				$('input[name="scam"]').val(response.scam);
				$('input[name="scam_query"]').val(response.scam_query);
				$('input[name="score_id"]').val(score_id);
			}
		})
	});


	var oldWindowURL = window.location.href;
	var index = oldWindowURL.indexOf('?');
	var newWindowURL = oldWindowURL.substring(0,index);
	window.history.pushState(null, null, newWindowURL);
	$('#name').css('background-color','#99A3A4');
	$('#email').css('background-color','#99A3A4');
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
		    $('.serror').text("");
		})
		$('#scam_query').keyup(function(event) {
		    $('.sqerror').text("");
		})

</script>


