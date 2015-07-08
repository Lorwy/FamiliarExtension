//
//  ViewController.m
//  FamiliarExtension
//
//  Created by Lorwy on 15/7/8.
//  Copyright (c) 2015年 Lorwy. All rights reserved.
//

#import "ViewController.h"
#import "NSDate+TimeAgo.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _timeLabel.text = [[NSDate new] timeAgo];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
