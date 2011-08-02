/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class DADSearchQuery;

@interface ASSearchTask : ASTask {
	DADSearchQuery *_query;	// 104 = 0x68
	int _numDownloadedElements;	// 108 = 0x6c
}
@property(readonly, assign) DADSearchQuery *query;	// G=0x302fad41; @synthesize=_query
- (id)initWithQuery:(id)query;	// 0x302fae05
- (int)commandCode;	// 0x302fad3d
- (void)dealloc;	// 0x302fadbd
- (id)description;	// 0x302fad51
// declared property getter: - (id)query;	// 0x302fad41
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x302fae55
@end
