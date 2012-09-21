//
//  MasterViewController.h
//  robbyrob
//
//  Created by Robert Jacques on 9/21/12.
//  Copyright (c) 2012 Robert Jacques. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
