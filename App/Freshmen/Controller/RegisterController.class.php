<?php
	//���˱�������д������
	//�����Ҫ�����Ժϲ���Index��������
	namespace Freshmen/Controller;
	use Think/Controller;
	
	class RegisterController extends Controller{
		
		public function add(){			//�����ύ������
			//array data:��ȡ������
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
			
			//�������ݿ�
			$DBase = M('freshmen');
			//��������Ŀ������δ���棩
			$DBase->create($data);
			//�����Ƿ�����ظ��ύ
				//�����жϵ�Ψһ�ֶ�Ϊuid��tel
			$dupCheck = $DBase->where('uid=' . $data['uid'] . ' AND tel=' . $data['tel'])->find();
			if($dupCheck != NULL){			//ץ���ظ��ύ��
				$this->error("��Ŷ�������������ظ�������Ү��<br> ��ϸ��һ����֮ǰ��û���ύ���ޣ�<br>");
			}
			else		//���δ�����ظ������ݣ���ֱ��д��
			{
				$DBase->add();
				//��������Ƿ�������д����
				$finishCheck = $DBase->where($data)->find();
				if($dupCheck != NULL){
					$this->success("�������ύ�ɹ�����<br>");
				}
			}
			
			$this->display();
		}
		
		public function modify(){		//�����޸ı�����
			
			
			
		}
	}