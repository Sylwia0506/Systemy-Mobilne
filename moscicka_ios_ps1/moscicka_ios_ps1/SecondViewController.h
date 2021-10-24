//
//  SecondViewController.h
//  moscicka_ios_ps1
//
//  Created by student on 11/10/2021.
//  Copyright © 2021 student. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;

@property NSString *surname;

@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UIButton *backProperty;

- (IBAction) randomeName;

@end

NS_ASSUME_NONNULL_END
