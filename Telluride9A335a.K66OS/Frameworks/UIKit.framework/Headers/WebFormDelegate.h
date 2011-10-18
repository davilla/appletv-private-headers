/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol WebFormDelegate <NSObject>
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;
@end

