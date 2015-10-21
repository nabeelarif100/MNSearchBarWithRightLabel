//
//  SearchResultsTableViewController.h
//  MNSearchBarWithRightLabel
//
//  Created by Nabeel Arif on 10/17/15.
//  Copyright © 2015 Nabeel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchResultsTableViewController : UITableViewController

@property (nonatomic,strong) NSArray<NSString*> *filteredResults;

@end