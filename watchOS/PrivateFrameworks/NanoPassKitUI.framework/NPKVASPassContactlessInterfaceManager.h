//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKitUI/NPKQuickPaymentSessionDelegate-Protocol.h>

@class CSLSBacklightAssertion, NPKQuickPaymentSession, NSString, NSUUID, PKPass;
@protocol NPKVASPassContactlessInterfaceManagerDelegate;

@interface NPKVASPassContactlessInterfaceManager : NSObject <NPKQuickPaymentSessionDelegate>
{
    _Bool _isSessionEnabled;
    id <NPKVASPassContactlessInterfaceManagerDelegate> _delegate;
    NPKQuickPaymentSession *_paymentSession;
    CSLSBacklightAssertion *_screenOnAssertion;
    NSUUID *_currentPassToken;
    double _resetSessionTimeoutAfterTransaction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *currentPassToken; // @synthesize currentPassToken=_currentPassToken;
@property(nonatomic) _Bool isSessionEnabled; // @synthesize isSessionEnabled=_isSessionEnabled;
@property(retain, nonatomic) CSLSBacklightAssertion *screenOnAssertion; // @synthesize screenOnAssertion=_screenOnAssertion;
@property(retain, nonatomic) NPKQuickPaymentSession *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(nonatomic) double resetSessionTimeoutAfterTransaction; // @synthesize resetSessionTimeoutAfterTransaction=_resetSessionTimeoutAfterTransaction;
@property(nonatomic) __weak id <NPKVASPassContactlessInterfaceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_scheduleResetSessionForPass:(id)arg1;
- (void)_releaseScreenOnAssertion;
- (void)_renewScreenOnAssertion;
- (void)_requestScreenOnAssertion;
- (void)_transactionDidFinishWithValueAddedServiceTransactions:(id)arg1 passes:(id)arg2;
- (void)paymentSession:(id)arg1 didCompleteForReason:(unsigned int)arg2 withTransactionContext:(id)arg3;
- (void)paymentSession:(id)arg1 didFailTransactionForPass:(id)arg2 withValueAddedServiceTransactions:(id)arg3 forValueAddedServicePasses:(id)arg4;
- (void)paymentSessionDidSelectValueAddedService:(id)arg1;
- (void)paymentSession:(id)arg1 didActivatePass:(id)arg2;
- (void)_disablePaymentSession;
- (void)_enablePaymentSessionWithPass:(id)arg1;
- (void)releaseScreenOnAssertion;
- (void)acquireScreenOnAssertion;
- (void)resetSession;
@property(retain, nonatomic) PKPass *pass;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

