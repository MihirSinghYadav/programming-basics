<?php
	session_start();
	if(isset($_SESSION['username']) && $_SESSION['username']!='') {
		require_once('userheader.php');
		require_once('../config.php');
		$name=$_SESSION['name'];
		$selectdetails="SELECT `cibil_system_user`.*, `cibil_system_userscore`.*, `cibil_system_login`.* FROM `cibil_system_user` JOIN `cibil_system_userscore` ON `cibil_system_user`.score_id=`cibil_system_userscore`.id JOIN `cibil_system_login` ON `cibil_system_user`.login_id=`cibil_system_login`.id WHERE `cibil_system_login`.username='$name'";
		$querydetails=mysqli_query($conn,$selectdetails);
		$resdetails=mysqli_fetch_object($querydetails);
?>

<link rel="stylesheet" type="text/css" href="https://cdn.datatables.net/1.10.19/css/jquery.dataTables.min.css">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jquery-modal/0.9.1/jquery.modal.min.css" />


<style type="text/css">

	.modal{
		background: #2D2B46;
	}

</style>

	<div class="corporate" style="padding-top: 130px!important; padding-bottom: 100px; padding-left: 0; padding-right: 0;">
		<div class="container-fluid cibilscore">
			<h1>Credit Score</h1>
			<div class="row" style="background: #2d2b46; color: white; border-radius: 20px; ">
			    <table id="example" class="display nowrap table-striped border text-center" style="width:100%">
			        <thead>
			            <tr>
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
			            </tr>
			        </thead>
			        <tbody>
			            <tr>
			                <td> <?php echo $resdetails->name; ?> </td>
			                <td> <?php echo $resdetails->email; ?> </td>
			                <td> <?php echo $resdetails->contact; ?> </td>
			                <td> <?php echo $resdetails->city; ?> </td>
			                <td> <?php echo $resdetails->address; ?> </td>
			                <td> <?php echo $resdetails->ccdues; ?> </td>
			                <td> <?php echo $resdetails->pending_loan; ?> </td>
			                <td> <?php echo $resdetails->bounce_check; ?> </td>
			                <td> <?php echo $resdetails->scam; ?> </td>
			                <td> <?php echo $resdetails->score; ?> </td>
			            </tr>
			        </tbody>
			    </table>
			</div>
			<h1>Defaulter Details</h1>
			<div class="row" style="background: #B03A2E; color: white; border-radius: 20px; ">
			    <div class="container-fluid text-right pt-4 pr-4">
					<a href="#login-form" rel="modal:open" class="login-btn ml-auto">Send Improvement</a>
				</div>
			    <table id="example1" class="display nowrap table-striped border text-center" style="width:100%">
			        <thead>
			            <tr>
			                <th>Name</th>
			                <th>Email</th>
			                <th>Mobile</th>
			                <th>City</th>
			                <th>Address</th>
			                <th>Credit Dues Details</th>
			                <th>Pending Loans Details</th>
			                <th>Check Bounce Details</th>
			                <th>Other Scam Details</th>
			            </tr>
			        </thead>
			        <tbody>
			            <tr>
			                <td> <?php echo $resdetails->name; ?> </td>
			                <td> <?php echo $resdetails->email; ?> </td>
			                <td> <?php echo $resdetails->contact; ?> </td>
			                <td> <?php echo $resdetails->city; ?> </td>
			                <td> <?php echo $resdetails->address; ?> </td>
			                <td> <?php echo $resdetails->ccdues_query; ?> </td>
			                <td> <?php echo $resdetails->pendingloan_query; ?> </td>
			                <td> <?php echo $resdetails->bouncecheck_query; ?> </td>
			                <td> <?php echo $resdetails->scam_query; ?> </td>
			            </tr>
			        </tbody>
			    </table>
			</div>
			<div class="modal scamreport" id="login-form">
				<form action="addimprovement.php" method="post" id="addimprovementform">
					<h3 style="color:white; font-weight: bold; text-transform: uppercase;">Send Improvements</h3>
					<textarea rows=6 name="improvement" id="improv"></textarea>
					<div class="imerror text-danger"></div>
					<button type=submit class="login-btn mt-3" id="addimprovementsubmit">Submit</button>
				</form>
			</div>
		</div>
	</div>


<?php
	require_once('userfooter.php');
	
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
	}
	else{
		header('Location:../error.php');
	}
?>

