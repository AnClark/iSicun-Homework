<?php
	namespace TestorAutomatic\Controller;
	use Think\Controller;
	
	class HelloController extends Controller {
		public function hello(){
			echo "Hello!";
			
		}
		public function byebye(){
			echo "Byebye!";
			
		}
	}
