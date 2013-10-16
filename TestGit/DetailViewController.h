//
//  DetailViewController.h
//  TestGit
//
//  Created by Deep Singh on 10/16/13.
//  Copyright (c) 2013 Deep Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
