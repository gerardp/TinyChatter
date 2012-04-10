//
//  ChatViewCell.h
//  TinyChatter
//
//  Created by jj on 12/4/10.
//  Copyright (c) 2012年 jtg2078@hotmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    CellViewCellModeLeftAlign,
    CellViewCellModeRightAlign
} CellViewCellMode;

@interface ChatViewCell : UITableViewCell

@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic) CellViewCellMode cellMode;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier mode:(CellViewCellMode)aMode;

- (void)setMessage:(NSString *)aString;

@end
