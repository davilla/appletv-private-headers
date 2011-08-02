/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UISharedImageStatistics : NSObject {
@private
	double _loadTime;	// 4 = 0x4
	double _requestTime;	// 12 = 0xc
	unsigned _requests;	// 20 = 0x14
	unsigned _flushes;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned flushes;	// G=0x3032e965; S=0x3032e975; @synthesize=_flushes
@property(assign, nonatomic) double loadTime;	// G=0x3032e9c9; S=0x3032e9d9; @synthesize=_loadTime
@property(assign, nonatomic) double requestTime;	// G=0x3032e9a5; S=0x3032e9b5; @synthesize=_requestTime
@property(assign, nonatomic) unsigned requests;	// G=0x3032e985; S=0x3032e995; @synthesize=_requests
// declared property getter: - (unsigned)flushes;	// 0x3032e965
// declared property getter: - (double)loadTime;	// 0x3032e9c9
// declared property getter: - (double)requestTime;	// 0x3032e9a5
// declared property getter: - (unsigned)requests;	// 0x3032e985
// declared property setter: - (void)setFlushes:(unsigned)flushes;	// 0x3032e975
// declared property setter: - (void)setLoadTime:(double)time;	// 0x3032e9d9
// declared property setter: - (void)setRequestTime:(double)time;	// 0x3032e9b5
// declared property setter: - (void)setRequests:(unsigned)requests;	// 0x3032e995
@end

