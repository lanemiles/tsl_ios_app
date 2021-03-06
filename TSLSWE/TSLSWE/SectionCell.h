//
//  SectionCell.h
//  TSLSWE
//
//  Created by Lane Miles on 4/19/15.
//  Copyright (c) 2015 Lane Miles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SectionCell : UITableViewCell

//image for the section
@property (strong, nonatomic) IBOutlet UIImageView *image;

//section title
@property (strong, nonatomic) IBOutlet UILabel *name;

@end
