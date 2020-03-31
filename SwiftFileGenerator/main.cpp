//
//  main.cpp
//  SwiftFileGenerator
//
//  Created by mcs on 3/25/20.
//  Copyright © 2020 MCS. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::__fs::filesystem;

/**
    (turn this to README)
    The goal of ATG (app template generator) is to save the iOS developer some time by pregenerating the code structure based on a series of questions.
 */

// ask if they want MVVM/MVC structure, login, core data (maybe), tests
int main () {
    ofstream myfile;
    string pName;
    string arch;
  
    // name and create project dir
    cout << "What do you want to name your project?\n";
    cin >> pName;
    fs::create_directories("/Users/mcs/Desktop/" + pName);
    
    cout << "Do you want this project to have MVC archictecture (defaults to MVVM)? (y/n)\n";
    cin >> arch;
    
    // create files
    if (arch == "y") {
        myfile.open("/Users/mcs/Desktop/" + pName + "/MainViewController.swift");
        myfile << "//\n//  ViewController.swift\n//  " + pName + "\n//\n//  Created by mcs on 2/27/20.\n//  Copyright © 2020 MCS. All rights reserved.\n//\n\n";
        myfile << "import UIKit\n\n";
        myfile << "class MainViewController: UIViewController {\n\n";
        myfile << "     override func viewDidLoad() {\n";
        myfile << "         super.viewDidLoad()\n";
        myfile << "     }\n";
        myfile << "}";
        myfile.close();
    }
  
    return 0;
}
