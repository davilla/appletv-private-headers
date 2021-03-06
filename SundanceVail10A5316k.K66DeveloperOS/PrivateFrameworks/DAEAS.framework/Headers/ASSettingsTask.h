/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, NSDictionary;

@interface ASSettingsTask : ASTask {
@private
	NSArray *_getters;	// 104 = 0x68
	NSDictionary *_setters;	// 108 = 0x6c
}
@property(retain) NSArray *getters;	// G=0x30958939; S=0x3095894d; @synthesize=_getters
@property(retain) NSDictionary *setters;	// G=0x3095895d; S=0x30958971; @synthesize=_setters
- (id)init;	// 0x30957d55
- (int)commandCode;	// 0x30957e05
- (void)dealloc;	// 0x30957da1
- (void)finishWithError:(id)error;	// 0x309584e1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x30958299
// declared property getter: - (id)getters;	// 0x30958939
- (BOOL)processContext:(id)context;	// 0x309582ad
- (id)requestBody;	// 0x30957e09
// declared property setter: - (void)setGetters:(id)getters;	// 0x3095894d
// declared property setter: - (void)setSetters:(id)setters;	// 0x30958971
// declared property getter: - (id)setters;	// 0x3095895d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x309588b5
@end

