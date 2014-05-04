//
//  YMPeopleViewController.h
//  YaleMobile
//
//  Created by Danqing on 12/25/12.
//  Copyright (c) 2012 Danqing Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YMPeopleViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

@property (nonatomic, strong) IBOutlet UISearchBar *searchBar1;
@property (nonatomic, strong) IBOutlet UITableView *tableView1;
@property (nonatomic, strong) IBOutlet UIImageView *defaultBackground1;
@property (nonatomic, strong) UIView *searchOverlay;

@property (nonatomic, strong) NSArray *people;
@property (nonatomic, strong) NSMutableDictionary *individualData;

@property (nonatomic, strong) NSIndexPath *selectedIndexPath;

@end
