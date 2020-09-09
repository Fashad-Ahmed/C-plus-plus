//#include <iostream>
//using namespace std;
//
//class hospital
//{
//	protected:
//		char patientName[60];
//		char admissionDate[60];
//		char disease[60];
//		char dischargeDate[60];
//		
//	public:
//		void getInput()
//		{
//			cout << "Enter Patient Name : " << endl;cin >> patientName;
//			cout << "Enter the date on which patient is admitted : " << endl;cin >> admissionDate;
//			cout << "Mention Disease/Problem of patient : " << endl;cin >> disease;
//			cout << "Enter date of dis-charging : " << endl;cin >> dischargeDate;
//		}
//		void showInput()
//		{
//			cout << "Patient Name : " << patientName << endl;
//			cout << "Date of Admission : " << admissionDate << endl;
//			cout << "Disease : " << disease << endl;
//			cout << "Date of Discharge : " << dischargeDate << endl;
//		}
//		
//};
//
//class aged : public hospital
//{
//	private:
//		int agePatient;
//	
//	public:
//		void inputAge()
//		{
//			cout << "Enter Age of Patient : " << endl;cin >> agePatient;
//		}
//		void resultAge()
//		{
//			cout << "Patient's Age : " << agePatient << endl;
//		}
//		
//};
//
//
//int main()
//{
//	aged a1,a2;
//	
//	cout << "\nPATIENT 1 DATA\n" << endl;
//	
//	a1.getInput();
//	a1.inputAge();
//	a1.showInput();
//	a1.resultAge();
//	
//	cout << "\nPATIENT 2 DATA\n" << endl;
//	
//	a2.getInput();
//	a2.inputAge();
//	a2.showInput();
//	a2.resultAge();
//	
//	cout << endl;
//	return 0;
//	
//}

#include <iostream>
using namespace std;

class hospital
{
	protected:
		string patientName;
		string admissionDate;
		string disease;
		string dischargeDate;
		
	public:
		void getInput()
		{
			cout << "Enter Patient Name : " << endl;
			getline(cin,patientName);
			cout << "Enter the date on which patient is admitted : " << endl;
			getline(cin , admissionDate);
			cout << "Mention Disease/Problem of patient : " << endl;
			getline(cin , disease);
			cout << "Enter date of dis-charging : " << endl;
			getline(cin , dischargeDate);
		}
		void showInput()
		{
			cout << "Patient Name : " << patientName << endl;
			cout << "Date of Admission : " << admissionDate << endl;
			cout << "Disease : " << disease << endl;
			cout << "Date of Discharge : " << dischargeDate << endl;
		}
		
};

class aged : public hospital
{
	private:
		int agePatient;
	
	public:
		void getInput()
		{
			hospital :: getInput();
			cout << "Enter Age of Patient : " << endl;cin >> agePatient;
			cin.ignore();

		}
		void showInput()
		{
			hospital :: showInput();
			cout << "Patient's Age : " << agePatient << endl;
		}
		
};


int main()
{
	aged a1,a2;
		
	a1.getInput();
	cout << "\nPATIENT 1 DATA\n" << endl;
	a1.showInput();
	cout << "\n\n";		
	a2.getInput();
	cout << "\nPATIENT 2 DATA\n" << endl;	
	a2.showInput();
	
	cout << endl;
	return 0;
}
