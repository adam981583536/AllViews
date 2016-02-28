//
//  Cell3.h
//  Mars
//
//  Created by Macx on 16/2/22.
//  Copyright © 2016年 李小红和绿小明. All rights reserved.
//
#import <UIKit/UIKit.h>
@class Cell3Model;
@interface Cell3 : UITableViewCell
{
    __weak IBOutlet UIImageView *_img1;
    __weak IBOutlet UIImageView *_img2;
    __weak IBOutlet UIImageView *_img3;
    __weak IBOutlet UIImageView *_img4;
    __weak IBOutlet UIImageView *_img5;
    __weak IBOutlet UILabel *_label;
    
    __weak IBOutlet UILabel *_label1;
}
@property (nonatomic,strong) Cell3Model *model;
@end
