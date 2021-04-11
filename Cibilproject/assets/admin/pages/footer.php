<footer class="main-footer">
    <div class="pull-right hidden-xs">
      <b>Version</b> 2.4.0
    </div>
    <strong>Copyright &copy; 2016-2022 <a href="dashboard.php">Cibil System</a>. </strong> All rights
    reserved.
  </footer>
</div>
<!-- ./wrapper -->

<!-- jQuery 3 -->
<script src="../bower_components/jquery/dist/jquery.min.js"></script>
<!-- jQuery UI 1.11.4 -->
<script src="../bower_components/jquery-ui/jquery-ui.min.js"></script>
<!-- Resolve conflict in jQuery UI tooltip with Bootstrap tooltip -->
<script>
  $.widget.bridge('uibutton', $.ui.button);
</script>
<!-- Bootstrap 3.3.7 -->
<script src="../bower_components/bootstrap/dist/js/bootstrap.min.js"></script>
<!-- Bootstrap WYSIHTML5 -->
<script src="../plugins/bootstrap-wysihtml5/bootstrap3-wysihtml5.all.min.js"></script>
<!-- Slimscroll -->
<script src="../bower_components/jquery-slimscroll/jquery.slimscroll.min.js"></script>
<!-- FastClick -->
<script src="../bower_components/fastclick/lib/fastclick.js"></script>
<!-- AdminLTE App -->
<script src="../dist/js/adminlte.min.js"></script>
<!-- AdminLTE dashboard demo (This is only for demo purposes) -->
<script src="../dist/js/pages/dashboard.js?version=50"></script>
<!-- AdminLTE for demo purposes -->
<script src="../dist/js/demo.js"></script>
<script src="../../../lib/easing/easing.min.js"></script>
<script src="../../../lib/mobile-nav/mobile-nav.js"></script>
<script src="../../../lib/wow/wow.min.js"></script>
<script src="../../../lib/waypoints/waypoints.min.js"></script>
<script src="../../../lib/counterup/counterup.min.js"></script>
<script src="../../../lib/owlcarousel/owl.carousel.min.js"></script>
<script src="../../../lib/isotope/isotope.pkgd.min.js"></script>
<script src="../../../lib/lightbox/js/lightbox.min.js"></script>
<script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
<script src="../../../lib/wow/wow.min.js"></script>
<script src="../../../js/main.js?version=78"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery-modal/0.9.1/jquery.modal.min.js"></script>
</body>
</html>

<script type="text/javascript">
  
  $('#adminlogout').click(function(){
    swal({
        title: "Do You Want To Logout?",
        text: "",
        icon: "warning",
        buttons: ["No", "Yes"],
        dangerMode: true,
      })
      .then((willDelete) => {
        if (willDelete) {
          window.location.assign("logout.php");
        } else {
        }
      });
  });
</script>