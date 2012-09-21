//
//  DetailViewController.h
//  robbyrob
//
//  Created by Robert Jacques on 9/21/12.
//  Copyright (c) 2012 Robert Jacques. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
