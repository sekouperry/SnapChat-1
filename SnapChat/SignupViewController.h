//
//  SignupViewController.h
//  SnapChat
//
//  Created by Sherrie Jones on 2/19/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SignupViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (strong, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signupButton:(UIButton *)sender;

@end
