//
//  JFGivePhotoVC.h
//  GetGa
//
//  Created by Jared Fishman on 5/28/14.
//  Copyright (c) 2014 Jared Fishman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFGiveItemsTableViewC.h"

@interface JFGivePhotoVC : UIViewController

@property (strong ,nonatomic) UIImage *giveItemImage;

@property (strong, nonatomic) JFGiveItemsTableViewC *mainItemsTableVC;

@end
