/**
 * PPRetailCardReaderScanAndDiscoverOptions.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: js/paymentDevice/CardReaderScanAndDiscoverOptions.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailSimulationManager;
@class PPRetailMerchantManager;
@class PPRetailCaptureHandler;
@class PPRetailRecord;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflinePaymentInfo;
@class PPRetailOfflineTransactionRecord;
@class PPRetailQRCRecord;
@class PPRetailTokenExpirationHandler;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailDigitalCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailDigitalCardInfo;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailReaderConfiguration;
@class PPRetailSimulationOptions;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Card Reader Scan and Discover options to send it over to native side
 */
@interface PPRetailCardReaderScanAndDiscoverOptions : PPRetailObject






/**
 * Select to the card reader with this id
 */
-(void)connectToCardReader:(NSString* _Nullable)id;

/**
 * let the DeviceScanner know after the observers added
 */
-(void)onAddedObserver;




/**
 * Add a listener for the onCardReaderDiscovered event
 * @returns PPRetailOnCardReaderDiscoveredSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailOnCardReaderDiscoveredSignal _Nullable)addOnCardReaderDiscoveredListener:(PPRetailOnCardReaderDiscoveredEvent _Nullable)listener;

/**
 * Remove a listener for the onCardReaderDiscovered event given the signal object that was returned from addOnCardReaderDiscoveredListener
 */
-(void)removeOnCardReaderDiscoveredListener:(PPRetailOnCardReaderDiscoveredSignal _Nullable)listenerToken;


/**
 * Add a listener for the onScanComplete event
 * @returns PPRetailOnScanCompleteSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailOnScanCompleteSignal _Nullable)addOnScanCompleteListener:(PPRetailOnScanCompleteEvent _Nullable)listener;

/**
 * Remove a listener for the onScanComplete event given the signal object that was returned from addOnScanCompleteListener
 */
-(void)removeOnScanCompleteListener:(PPRetailOnScanCompleteSignal _Nullable)listenerToken;


/**
 * Add a listener for the onConnectionStatus event
 * @returns PPRetailOnConnectionStatusSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailOnConnectionStatusSignal _Nullable)addOnConnectionStatusListener:(PPRetailOnConnectionStatusEvent _Nullable)listener;

/**
 * Remove a listener for the onConnectionStatus event given the signal object that was returned from addOnConnectionStatusListener
 */
-(void)removeOnConnectionStatusListener:(PPRetailOnConnectionStatusSignal _Nullable)listenerToken;


@end
