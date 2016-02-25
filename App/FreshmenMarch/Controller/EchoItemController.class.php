<?php
	namespace FreshmenMarch\Controller;
	use Think\Controller;
	
	class EchoItemController extends Controller{
		public function EchoItem($id='00001', $name='社联新人', $faculty='学院名', $grade='2015级'){
			echo "【序号】	" . $id . "<br>";
			echo "【姓名】	" . $name . "<br>";
			echo "【学院】	" . $faculty . "<br>";
			echo "【年级】	" . $grade . "<br>";
		}
	}
