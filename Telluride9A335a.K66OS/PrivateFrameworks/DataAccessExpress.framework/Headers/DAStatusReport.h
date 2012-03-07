/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSDate;

@interface DAStatusReport : NSObject {
	NSString *_persistentUUID;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_accountType;	// 12 = 0xc
	NSNumber *_timeSpan;	// 16 = 0x10
	NSNumber *_timeInNetworking;	// 20 = 0x14
	NSNumber *_averageHBI;	// 24 = 0x18
	NSNumber *_successfulRequests;	// 28 = 0x1c
	NSNumber *_failedNetworkRequests;	// 32 = 0x20
	NSNumber *_failedProtocolRequests;	// 36 = 0x24
	NSNumber *_downloadedElements;	// 40 = 0x28
	NSNumber *_falseMoreAvailableCount;	// 44 = 0x2c
	NSDate *_creationDate;	// 48 = 0x30
	int _numHBIDataPoints;	// 52 = 0x34
}
@property(retain) NSString *accountType;	// G=0x30f50611; S=0x30f50625; @synthesize=_accountType
@property(retain) NSNumber *averageHBI;	// G=0x30f506a5; S=0x30f506b9; @synthesize=_averageHBI
@property(retain) NSString *displayName;	// G=0x30f505d9; S=0x30f505ed; @synthesize=_displayName
@property(retain) NSNumber *downloadedElements;	// G=0x30f50785; S=0x30f50799; @synthesize=_downloadedElements
@property(retain) NSNumber *failedNetworkRequests;	// G=0x30f50715; S=0x30f50729; @synthesize=_failedNetworkRequests
@property(retain) NSNumber *failedProtocolRequests;	// G=0x30f5074d; S=0x30f50761; @synthesize=_failedProtocolRequests
@property(retain) NSNumber *falseMoreAvailableCount;	// G=0x30f507bd; S=0x30f507d1; @synthesize=_falseMoreAvailableCount
@property(retain) NSString *persistentUUID;	// G=0x30f505a1; S=0x30f505b5; @synthesize=_persistentUUID
@property(retain) NSNumber *successfulRequests;	// G=0x30f506dd; S=0x30f506f1; @synthesize=_successfulRequests
@property(retain) NSNumber *timeInNetworking;	// G=0x30f5066d; S=0x30f50681; @synthesize=_timeInNetworking
@property(retain, nonatomic) NSNumber *timeSpan;	// G=0x30f50209; S=0x30f50649; @synthesize=_timeSpan
- (id)init;	// 0x30f4f689
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x30f4f6f5
// declared property getter: - (id)accountType;	// 0x30f50611
// declared property getter: - (id)averageHBI;	// 0x30f506a5
- (void)dealloc;	// 0x30f4f8f1
- (id)description;	// 0x30f501a1
- (id)dictionaryRepresentation;	// 0x30f4fa19
// declared property getter: - (id)displayName;	// 0x30f505d9
// declared property getter: - (id)downloadedElements;	// 0x30f50785
// declared property getter: - (id)failedNetworkRequests;	// 0x30f50715
// declared property getter: - (id)failedProtocolRequests;	// 0x30f5074d
// declared property getter: - (id)falseMoreAvailableCount;	// 0x30f507bd
- (void)mergeStatusReport:(id)report;	// 0x30f4fcd5
- (void)noteFailedNetworkRequest;	// 0x30f50369
- (void)noteFailedProtocolRequest;	// 0x30f503c9
- (void)noteFalseMoreAvailableResponse;	// 0x30f50541
- (void)noteNewHBIDataPoint:(int)point;	// 0x30f50429
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x30f502b9
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x30f504c5
// declared property getter: - (id)persistentUUID;	// 0x30f505a1
// declared property setter: - (void)setAccountType:(id)type;	// 0x30f50625
// declared property setter: - (void)setAverageHBI:(id)hbi;	// 0x30f506b9
// declared property setter: - (void)setDisplayName:(id)name;	// 0x30f505ed
// declared property setter: - (void)setDownloadedElements:(id)elements;	// 0x30f50799
// declared property setter: - (void)setFailedNetworkRequests:(id)requests;	// 0x30f50729
// declared property setter: - (void)setFailedProtocolRequests:(id)requests;	// 0x30f50761
// declared property setter: - (void)setFalseMoreAvailableCount:(id)count;	// 0x30f507d1
// declared property setter: - (void)setPersistentUUID:(id)uuid;	// 0x30f505b5
// declared property setter: - (void)setSuccessfulRequests:(id)requests;	// 0x30f506f1
// declared property setter: - (void)setTimeInNetworking:(id)networking;	// 0x30f50681
// declared property setter: - (void)setTimeSpan:(id)span;	// 0x30f50649
// declared property getter: - (id)successfulRequests;	// 0x30f506dd
// declared property getter: - (id)timeInNetworking;	// 0x30f5066d
// declared property getter: - (id)timeSpan;	// 0x30f50209
@end
