<?php
	//新人报名表填写主过程
	//如果需要，可以合并到Index控制器中
	namespace Freshmen/Controller;
	use Think/Controller;
	
	class RegisterController extends Controller{
		
		public function add(){			//新人提交报名表
			//array data:获取表单数据
			$data['name'] = $_POST['name'];
			$data['sex'] = $_POST['sex'];
			$data['uid'] = $_POST['uid'];
			$data['class'] = $_POST['class'];
			$data['dorm'] = $_POST['dorm'];
			$data['tel'] = $_POST['tel'];
			$data['qq'] = $_POST['qq'];
			$data['depart1'] = $_POST['depart1'];
			$data['depart2'] = $_POST['depart2'];
			$data['concede'] = $_POST['concede'];
			$data['introduction'] = $_POST['introduction'];
			$data['expectation'] = $_POST['expectation'];
			
			//连接数据库
			$DBase = M('freshmen');
			//创建新条目（但尚未保存）
			$DBase->create($data);
			//检验是否存在重复提交
				//用于判断的唯一字段为uid和tel
			$dupCheck = $DBase->where('uid=' . $data['uid'] . ' AND tel=' . $data['tel'])->find();
			if($dupCheck != NULL){			//抓到重复提交了
				$this->error("啊哦。。。发现了重复的数据耶！<br> 仔细想一下你之前有没有提交过噢！<br>");
			}
			else		//如果未发现重复的数据，就直接写入
			{
				$DBase->add();
				//检查数据是否真正被写入了
				$finishCheck = $DBase->where($data)->find();
				if($dupCheck != NULL){
					$this->success("报名表提交成功啦！<br>");
				}
			}
			
			$this->display();
		}
		
		public function modify(){		//新人修改报名表
			
			
			
		}
	}