/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qtimer.sip"
#include <qtimer.h>
#line 39 "sipQtCoreQTimer.cpp"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQTimer.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtCoreQTimer.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtCoreQTimer.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQTimer.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 55 "sipQtCoreQTimer.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtCoreQTimer.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtCoreQTimer.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtCoreQTimer.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtCoreQTimer.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 70 "sipQtCoreQTimer.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 73 "sipQtCoreQTimer.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtCoreQTimer.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtCoreQTimer.cpp"


class sipQTimer : public QTimer
{
public:
    sipQTimer(QObject *);
    virtual ~sipQTimer();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void timerEvent(QTimerEvent *);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimer(const sipQTimer &);
    sipQTimer &operator = (const sipQTimer &);

    char sipPyMethods[7];
};

sipQTimer::sipQTimer(QObject *a0): QTimer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTimer::~sipQTimer()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTimer::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QTimer);
}

int sipQTimer::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTimer::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QTimer,_c,_id,_a);

    return _id;
}

void *sipQTimer::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QTimer,_clname)) ? this : QTimer::qt_metacast(_clname);
}

void sipQTimer::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QTimer::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t,PyObject *,QTimerEvent *);

    sipVH_QtCore_9(sipGILState,meth,a0);
}

bool sipQTimer::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_QtCore_5(sipGILState,meth,a0);
}

bool sipQTimer::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_QtCore_18(sipGILState,meth,a0,a1);
}

void sipQTimer::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t,PyObject *,QChildEvent *);

    sipVH_QtCore_25(sipGILState,meth,a0);
}

void sipQTimer::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,QEvent *);

    sipVH_QtCore_17(sipGILState,meth,a0);
}

void sipQTimer::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}

void sipQTimer::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}

QObject * sipQTimer::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQTimer::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQTimer::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQTimer::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQTimer::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQTimer::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

void sipQTimer::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QTimer::timerEvent(a0) : timerEvent(a0));
}


extern "C" {static PyObject *meth_QTimer_sender(PyObject *, PyObject *);}
static PyObject *meth_QTimer_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 339 "sipQtCoreQTimer.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_receivers(PyObject *, PyObject *);}
static PyObject *meth_QTimer_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 381 "sipQtCoreQTimer.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QTimer_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QTimer_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_isActive(PyObject *, PyObject *);}
static PyObject *meth_QTimer_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isActive();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_isActive, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timerId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerId, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_setInterval(PyObject *, PyObject *);}
static PyObject *meth_QTimer_setInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setInterval(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_setInterval, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_interval(PyObject *, PyObject *);}
static PyObject *meth_QTimer_interval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->interval();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_interval, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_isSingleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_isSingleShot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSingleShot();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_isSingleShot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_setSingleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_setSingleShot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSingleShot(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_setSingleShot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QObject * a1;
        char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "iqS", &a0, "()", &a1, &a2, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QTimer::singleShot(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        QObject * a1;
        char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "ig", &a0, "()", &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QTimer::singleShot(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_singleShot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_start, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_stop(PyObject *, PyObject *);}
static PyObject *meth_QTimer_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_stop, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTimer_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerEvent, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimer(void *, const sipTypeDef *);}
static void *cast_QTimer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QTimer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimer(void *, int);}
static void release_QTimer(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimer *>(sipCppV);
    else
        delete reinterpret_cast<QTimer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTimer(sipSimpleWrapper *);}
static void dealloc_QTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTimer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTimer *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimer(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimer[] = {{133, 255, 1}};


static PyMethodDef methods_QTimer[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QTimer_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QTimer_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QTimer_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QTimer_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_interval), meth_QTimer_interval, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isActive), meth_QTimer_isActive, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isSingleShot), meth_QTimer_isSingleShot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QTimer_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QTimer_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setInterval), meth_QTimer_setInterval, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setSingleShot), meth_QTimer_setSingleShot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_singleShot), meth_QTimer_singleShot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_start), meth_QTimer_start, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stop), meth_QTimer_stop, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QTimer_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimer_timerId, METH_VARARGS, NULL}
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QTimer[] = {
    {"timeout()", 0, 0},
    {0, 0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimer,
        {0}
    },
    {
        sipNameNr_QTimer,
        {0, 0, 1},
        16, methods_QTimer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QTimer,
    0,
    init_QTimer,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTimer,
    0,
    0,
    0,
    release_QTimer,
    cast_QTimer,
    0,
    0,
    0
},
    &QTimer::staticMetaObject,
    0,
    pyqt4_signals_QTimer
};