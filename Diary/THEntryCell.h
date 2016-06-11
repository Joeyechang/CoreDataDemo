//
//  THEntryCell.h
//  Diary
//
//  Created by Joey Chang on 6/11/16.
//  Copyright (c) 2014 joey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THDiaryEntry;

@interface THEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry:(THDiaryEntry *)entry;

@end
