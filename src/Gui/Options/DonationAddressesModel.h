// Copyright (c) 2015-2017, The Sikka developers
//
// This file is part of Sikka.
//
// Sikka is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Sikka is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Sikka.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class DonationAddressesModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(DonationAddressesModel)

public:
  DonationAddressesModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~DonationAddressesModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;
};

}
