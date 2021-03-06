/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library


@interface AFAggregator : NSObject {
	int _type;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	BOOL _hasActiveRequest;	// 16 = 0x10
	BOOL _sessionIsRetrying;	// 17 = 0x11
	BOOL _retryPrefersWWAN;	// 18 = 0x12
}
@property(assign) int connectionType;	// G=0x34622cc9; S=0x34622cdd; @synthesize=_type
@property(assign) BOOL hasActiveRequest;	// G=0x34622cf5; S=0x34622d0d; @synthesize=_hasActiveRequest
+ (void)logRequestCancelAfterSeconds:(double)seconds;	// 0x346228a1
+ (void)logRequestCancelled;	// 0x34622c49
+ (void)logRequestCompleted;	// 0x34622bc9
+ (void)logRequestCompletedWithDuration:(double)duration;	// 0x346227b9
+ (void)logRequestFailed;	// 0x34622b49
+ (void)logRequestStarted;	// 0x34622ac9
+ (void)missedAlertContextForRequest;	// 0x3462288d
+ (void)missedAppContextForRequest;	// 0x34622879
- (void)beginSessionRetryPreferringWWAN:(BOOL)wwan;	// 0x346226c9
- (void)connectionDidDrop;	// 0x34622681
- (void)connectionDidFail;	// 0x34622639
// declared property getter: - (int)connectionType;	// 0x34622cc9
// declared property getter: - (BOOL)hasActiveRequest;	// 0x34622cf5
- (void)recordFailure:(int)failure forConnectionType:(int)connectionType;	// 0x346224d9
- (void)recordSessionRetrySuccess;	// 0x34622569
- (void)recordSuccessForConnectionType:(int)connectionType isWarm:(BOOL)warm forTimeInterval:(double)timeInterval;	// 0x346223c1
// declared property setter: - (void)setConnectionType:(int)type;	// 0x34622cdd
// declared property setter: - (void)setHasActiveRequest:(BOOL)request;	// 0x34622d0d
- (void)speechResponseFailure;	// 0x346227b1
- (void)speechResponseReceived;	// 0x3462271d
- (void)startWaitingForSpeechResponse;	// 0x346226ed
@end

