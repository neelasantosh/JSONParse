//
//  CustomerTableViewController.h
//  JSONParsing
//
//  Created by Rajesh on 17/12/15.
//  Copyright (c) 2015 CDAC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomerTableViewController : UITableViewController
- (IBAction)loadCustomers:(id)sender;


@property NSMutableArray *arrayCustomers;

@end
