//
//  BizareaView.h
//  Mars
//
//  Created by Macx on 16/2/2.
//  Copyright © 2016年 李小红和绿小明. All rights reserved.
//
#import <UIKit/UIKit.h>

@class BizareaModel;

typedef void(^BizereaStoreShowBlock) (NSDictionary *dic);

@interface BizareaView : UIView

@property (nonatomic,strong)BizareaModel *bizareaModel;
@property (nonatomic,copy)BizereaStoreShowBlock bizereaStoreShowBlock;
@end
