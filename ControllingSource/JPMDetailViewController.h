//
//  JPMDetailViewController.h
//  ControllingSource
//
//  Created by Joao Pedro Machado on 29/07/14.
//  Copyright (c) 2014 Joao Pedro Machado. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPMDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
