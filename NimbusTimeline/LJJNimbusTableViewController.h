//
//  NITimelineTableViewController.h
//  NimbusTimeline
//
//  Created by jimneylee on 13-7-29.
//  Copyright (c) 2013年 jimneylee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LJJNimbusTableModel.h"

@interface LJJNimbusTableViewController : UITableViewController

@property (nonatomic, strong) NIActionBlock tapAction;
@property (nonatomic, strong) LJJNimbusTableModel* model;
@property (nonatomic, strong) NITableViewActions* actions;
@property (nonatomic, strong) NICellFactory* cellFactory;

- (void)autoPullDownRefreshActionAnimation;
- (void)didBeginLoadData;
- (void)didFinishLoadData;
- (void)didFailLoadData;

@end