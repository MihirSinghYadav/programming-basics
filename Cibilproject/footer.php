<!--==========================
    Footer
  ============================-->
  <footer id="footer" class="section-bg">
    <div class="footer-top">
      <div class="container map">
        <div class="row justify-content-center">
          <div class="col-1"></div>
          <div class="col-10 map1">
            <div class="container">
              <div class="row">
                <div class="col-md-8 col-lg-6 col-sm-12 map-inner">
                  <h2>CIBIL Office</h2>
                  <h6>Borivali West, Mumbai, Maharashtra India</h6>
                  <h6>+91 99999 00000</h6>
                  <h6>contact@cibil.com</h6>
                </div>
              </div>
            </div>
          </div>
          <div class="col-1"></div>
        </div>
      </div>
      <div class="container">

        <div class="row">

          <div class="col-lg-6">

            <div class="row">

                <div class="col-sm-6">

                  <div class="footer-info">
                    <h3><i class="fa fa-university"></i> Cibil</h3>
                    <p>India’s leading credit information company and maintains one of the largest collections of consumer information globally.</p>
                  </div>

                  <div class="footer-newsletter">
                    <h4>Our Newsletter</h4>
                    <p>Subscribe now and get latest updates</p>
                    <form action="" method="post">
                      <input type="email" name="email"><input type="submit"  value="Subscribe">
                    </form>
                  </div>

                </div>

                <div class="col-sm-6">
                  <div class="footer-links">
                    <h4>Useful Links</h4>
                    <ul>
                      <li><a href="#intro">Home</a></li>
                      <li><a href="#about">About us</a></li>
                      <li><a href="#services">Services</a></li>
                    </ul>
                  </div>

                  <div class="social-links">
                    <a href="#" class="twitter"><i class="fa fa-twitter"></i></a>
                    <a href="#" class="facebook"><i class="fa fa-facebook"></i></a>
                    <a href="#" class="instagram"><i class="fa fa-instagram"></i></a>
                    <a href="#" class="linkedin"><i class="fa fa-linkedin"></i></a>
                  </div>

                </div>

            </div>

          </div>

          <div class="col-lg-6">

            <div class="form">
              
              <h4>Send us a message</h4>
              <p>Get in touch, send us an e-mail or call us</p>
              <form action="" method="post" role="form" class="contactForm">
                <div class="form-group">
                  <input type="text" name="name" class="form-control" id="name" placeholder="Your Name" data-rule="minlen:4" data-msg="Please enter at least 4 chars" />
                  <div class="validation"></div>
                </div>
                <div class="form-group">
                  <input type="email" class="form-control" name="email" id="email" placeholder="Your Email" data-rule="email" data-msg="Please enter a valid email" />
                  <div class="validation"></div>
                </div>
                <div class="form-group">
                  <input type="text" class="form-control" name="subject" id="subject" placeholder="Subject" data-rule="minlen:4" data-msg="Please enter at least 8 chars of subject" />
                  <div class="validation"></div>
                </div>
                <div class="form-group">
                  <textarea class="form-control" name="message" rows="5" data-rule="required" data-msg="Please write something for us" placeholder="Message"></textarea>
                  <div class="validation"></div>
                </div>

                <div id="sendmessage">Your message has been sent. Thank you!</div>
                <div id="errormessage"></div>

                <div class="text-center"><button type="submit" title="Send Message">Send Message</button></div>
              </form>
            </div>

          </div>

          

        </div>

      </div>
    </div>

    <div class="container">
      <div class="copyright">
        &copy; Copyright <strong>CIBIL</strong>. All Rights Reserved
      </div>
      <div class="credits">
        <!--
          All the links in the footer should remain intact.
          You can delete the links only if you purchased the pro version.
          Licensing information: https://bootstrapmade.com/license/
          Purchase the pro version with working PHP/AJAX contact form: https://bootstrapmade.com/buy/?theme=Rapid
        -->
        Designed by <a href="">Nazim Chougule</a>
      </div>
    </div>
  </footer><!-- #footer -->

  <a href="#" class="back-to-top"><i class="fa fa-chevron-up"></i></a>
  <!-- Uncomment below i you want to use a preloader -->
  <!-- <div id="preloader"></div> -->

  <!-- JavaScript Libraries -->
  <script src="lib/jquery/jquery.min.js"></script>
  <script src="lib/jquery/jquery-migrate.min.js"></script>
  <script src="lib/bootstrap/js/bootstrap.bundle.min.js"></script>
  <script src="lib/easing/easing.min.js"></script>
  <script src="lib/mobile-nav/mobile-nav.js"></script>
  <script src="lib/wow/wow.min.js"></script>
  <script src="lib/waypoints/waypoints.min.js"></script>
  <script src="lib/counterup/counterup.min.js"></script>
  <script src="lib/owlcarousel/owl.carousel.min.js"></script>
  <script src="lib/isotope/isotope.pkgd.min.js"></script>
  <script src="lib/lightbox/js/lightbox.min.js"></script>
  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
  <!-- Template Main Javascript File -->
  <script src="js/main.js?version=45"></script>

</body>
</html>

<style type="text/css">
  .swal-button--danger{
    background-color: #e64942!important;
  }
</style>

<script type="text/javascript">
  
  $('#corplogout').click(function(){
    swal({
        title: "Do You Want To Logout?",
        text: "",
        icon: "warning",
        buttons: ["No", "Yes"],
        dangerMode: true,
      })
      .then((willDelete) => {
        if (willDelete) {
          window.location.assign("assets/corporate/logout.php");
        } else {
        }
      });
  });
  
  
  $('#userlogout').click(function(){
    swal({
        title: "Do You Want To Logout?",
        text: "",
        icon: "warning",
        buttons: ["No", "Yes"],
        dangerMode: true,
      })
      .then((willDelete) => {
        if (willDelete) {
          window.location.assign("assets/user/logout.php");
        } else {
        }
      });
  });
</script>