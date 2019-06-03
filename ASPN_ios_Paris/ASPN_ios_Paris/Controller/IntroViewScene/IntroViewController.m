//
//  IntroViewController.m
//  ASPN_ios_Paris
//
//  Created by SMJ_DEV on 03/06/2019.
//  Copyright © 2019 smj. All rights reserved.
//

#import "IntroViewController.h"
#import "LoginViewController.h"


@interface IntroViewController ()
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *IntroViewLoading;

@end

@implementation IntroViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    //Intro 화면안의  loadin bar
    [self.IntroViewLoading startAnimating];
    
  
    
    
    
}



@end
